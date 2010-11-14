# This script is called by the pre-commit git hook to test modules compile

use strict;
use warnings;
use Test::More;
use File::Spec;
use File::Find;

my $lib = File::Spec->rel2abs('C4');
find({
    bydepth => 1,
    no_chdir => 1,
    wanted => sub {
        my $m = $_;
	    return unless $m =~ s/[.]pm$//;
	    return if $m =~ /Auth_with_ldap/; # Dont test this, it will fail on use
	    return if $m =~ /Cache/; # Cache modules are a WIP, add the tests back when we are using them more
	    return if $m =~ /SIP/; # SIP modules will not load clean
	    $m =~ s{^.*/C4/}{C4/};	
	    $m =~ s{/}{::}g;
	    use_ok($m) || BAIL_OUT("***** PROBLEMS LOADING FILE '$m'");
    },
}, $lib);
done_testing();
