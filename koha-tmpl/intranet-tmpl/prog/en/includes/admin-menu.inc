<script type="text/javascript">//<![CDATA[
    $(document).ready(function() {
        var path = location.pathname.substring(1);
        var url = window.location.toString();
        var params = '';
        if ( url.match(/\?(.+)$/) ) {
            params = "?" + RegExp.$1;
        }
        $('#navmenulist a[href$="/' + path + params + '"]').css('font-weight','bold');
    });
//]]>
</script>
<div id="navmenu">
<div id="navmenulist">
<h5>System preferences</h5>
<ul>
    <li><a href="/cgi-bin/koha/admin/preferences.pl">System preferences</a></li>
</ul>

<h5>Basic parameters</h5>
<ul>
	<li><a href="/cgi-bin/koha/admin/branches.pl">Libraries and groups</a></li>
	<li><a href="/cgi-bin/koha/admin/itemtypes.pl">Item types</a></li>
	<li><a href="/cgi-bin/koha/admin/authorised_values.pl">Authorized values</a></li>
</ul>

<h5>Patrons and circulation</h5>
<ul>
	<li><a href="/cgi-bin/koha/admin/categorie.pl">Patron types and categories</a></li>
    <li><a href="/cgi-bin/koha/admin/smart-rules.pl">Circulation and fines rules</a></li>
	<li><a href="/cgi-bin/koha/admin/patron-attr-types.pl">Patron attribute types</a></li>
	<li><a href="/cgi-bin/koha/admin/branch_transfer_limits.pl">Library transfer limits</a></li>
	<li><a href="/cgi-bin/koha/admin/transport-cost-matrix.pl">Transport cost matrix</a></li>
	<li><a href="/cgi-bin/koha/admin/item_circulation_alerts.pl">Item circulation alerts</a></li>
    <li><a href="/cgi-bin/koha/admin/cities.pl">Cities and towns</a></li>
    <li><a href="/cgi-bin/koha/admin/roadtype.pl">Road types</a></li>
</ul>

<h5>Catalog</h5>
<ul>
    <li><a href="/cgi-bin/koha/admin/biblio_framework.pl">MARC bibliographic framework</a></li>
	<li><a href="/cgi-bin/koha/admin/koha2marclinks.pl">Koha to MARC mapping</a></li>
	<li><a href="/cgi-bin/koha/admin/fieldmapping.pl">Keywords to MARC mapping</a></li>
    <li><a href="/cgi-bin/koha/admin/checkmarc.pl">MARC bibliographic framework test</a></li>
    <li><a href="/cgi-bin/koha/admin/authtypes.pl">Authority types</a></li>
    <li><a href="/cgi-bin/koha/admin/classsources.pl">Classification sources</a></li>
    <li><a href="/cgi-bin/koha/admin/matching-rules.pl">Record matching rules</a></li>
    <li><a href="/cgi-bin/koha/admin/oai_sets.pl">OAI sets configuration</a></li>
</ul>

<h5>Acquisition parameters</h5>

<ul>
	<li><a href="/cgi-bin/koha/admin/currency.pl">Currencies and exchange rates</a></li>
	<li><a href="/cgi-bin/koha/admin/aqbudgetperiods.pl">Budgets</a></li>
	<li><a href="/cgi-bin/koha/admin/aqbudgets.pl">Funds</a></li>

</ul>

<h5>Additional parameters</h5>

<ul>
    [% IF ( NoZebra ) %]<li><a href="/cgi-bin/koha/admin/stopwords.pl">Stop words</a></li>[% END %]
	<!-- <li><a href="/cgi-bin/koha/admin/printers.pl">Network Printers</a></li> -->
    <li><a href="/cgi-bin/koha/admin/z3950servers.pl">Z39.50 client targets</a></li>
    <li><a href="/cgi-bin/koha/admin/didyoumean.pl">Did you mean?</a></li>
</ul>
</div>
</div>
