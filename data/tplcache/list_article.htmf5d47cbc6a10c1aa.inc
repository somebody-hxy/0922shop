<?php
$z[0]=Array("field","",300,319);
$z[0][4]['name']="title";
$z[1]=Array("global","",320,346);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",387,416);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",456,514);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1222,1257);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1504,1533);
$z[5][4]['name']="position";
$z[6]=Array("field","",1682,1740);
$z[6][4]['name']="typeid";
$z[6][4]['function']="GetTopTypename(@me)";
$z[7]=Array("list","\r\n        <li><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a><span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></li>\r\n        ",1784,1978);
$z[7][4]['pagesize']="10";
$z[8]=Array("pagelist","",2116,2187);
$z[8][4]['listitem']="info,index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",2260,2295);
$z[9][4]['filename']="left.htm";
$z[10]=Array("include","",2346,2383);
$z[10][4]['filename']="footer.htm";

?>