class AliHLTTPCGeometry
{
  static double fgX[HLTCA_ROW_COUNT];

public:
  static double Row2X(int row) {return(fgX[row]);}
};

#ifdef HLTCA_TPC_GEOMETRY_O2

double AliHLTTPCGeometry::fgX[HLTCA_ROW_COUNT] = { 85.225,
  85.975,
  86.725,
  87.475,
  88.225,
  88.975,
  89.725,
  90.475,
  91.225,
  91.975,
  92.725,
  93.475,
  94.225,
  94.975,
  95.725,
  96.475,
  97.225,
  97.975,
  98.725,
  99.475,
  100.225,
  100.975,
  101.725,
  102.475,
  103.225,
  103.975,
  104.725,
  105.475,
  106.225,
  106.975,
  107.725,
  108.475,
  109.225,
  109.975,
  110.725,
  111.475,
  112.225,
  112.975,
  113.725,
  114.475,
  115.225,
  115.975,
  116.725,
  117.475,
  118.225,
  118.975,
  119.725,
  120.475,
  121.225,
  121.975,
  122.725,
  123.475,
  124.225,
  124.975,
  125.725,
  126.475,
  127.225,
  127.975,
  128.725,
  129.475,
  130.225,
  130.975,
  131.725,
  135.2,
  136.2,
  137.2,
  138.2,
  139.2,
  140.2,
  141.2,
  142.2,
  143.2,
  144.2,
  145.2,
  146.2,
  147.2,
  148.2,
  149.2,
  150.2,
  151.2,
  152.2,
  153.2,
  154.2,
  155.2,
  156.2,
  157.2,
  158.2,
  159.2,
  160.2,
  161.2,
  162.2,
  163.2,
  164.2,
  165.2,
  166.2,
  167.2,
  168.2,
  171.4,
  172.6,
  173.8,
  175,
  176.2,
  177.4,
  178.6,
  179.8,
  181,
  182.2,
  183.4,
  184.6,
  185.8,
  187,
  188.2,
  189.4,
  190.6,
  191.8,
  193,
  194.2,
  195.4,
  196.6,
  197.8,
  199,
  200.2,
  201.4,
  202.6,
  203.8,
  205,
  206.2,
  209.65,
  211.15,
  212.65,
  214.15,
  215.65,
  217.15,
  218.65,
  220.15,
  221.65,
  223.15,
  224.65,
  226.15,
  227.65,
  229.15,
  230.65,
  232.15,
  233.65,
  235.15,
  236.65,
  238.15,
  239.65,
  241.15,
  242.65,
  244.15,
  245.65,
};

#else

double AliHLTTPCGeometry::fgX[HLTCA_ROW_COUNT] = { 85.195,
				     85.945,
				     86.695,
				     87.445,
				     88.195,
				     88.945,
				     89.695,
				     90.445,
				     91.195,
				     91.945,
				     92.695,
				     93.445,
				     94.195,
				     94.945,
				     95.695,
				     96.445,
				     97.195,
				     97.945,
				     98.695,
				     99.445,
				     100.195,
				     100.945,
				     101.695,
				     102.445,
				     103.195,
				     103.945,
				     104.695,
				     105.445,
				     106.195,
				     106.945,
				     107.695,
				     108.445,
				     109.195,
				     109.945,
				     110.695,
				     111.445,
				     112.195,
				     112.945,
				     113.695,
				     114.445,
				     115.195,
				     115.945,
				     116.695,
				     117.445,
				     118.195,
				     118.945,
				     119.695,
				     120.445,
				     121.195,
				     121.945,
				     122.695,
				     123.445,
				     124.195,
				     124.945,
				     125.695,
				     126.445,
				     127.195,
				     127.945,
				     128.695,
				     129.445,
				     130.195,
				     130.945,
				     131.695,
				     135.180,
				     136.180,
				     137.180,
				     138.180,
				     139.180,
				     140.180,
				     141.180,
				     142.180,
				     143.180,
				     144.180,
				     145.180,
				     146.180,
				     147.180,
				     148.180,
				     149.180,
				     150.180,
				     151.180,
				     152.180,
				     153.180,
				     154.180,
				     155.180,
				     156.180,
				     157.180,
				     158.180,
				     159.180,
				     160.180,
				     161.180,
				     162.180,
				     163.180,
				     164.180,
				     165.180,
				     166.180,
				     167.180,
				     168.180,
				     169.180,
				     170.180,
				     171.180,
				     172.180,
				     173.180,
				     174.180,
				     175.180,
				     176.180,
				     177.180,
				     178.180,
				     179.180,
				     180.180,
				     181.180,
				     182.180,
				     183.180,
				     184.180,
				     185.180,
				     186.180,
				     187.180,
				     188.180,
				     189.180,
				     190.180,
				     191.180,
				     192.180,
				     193.180,
				     194.180,
				     195.180,
				     196.180,
				     197.180,
				     198.180,
				     199.430,
				     200.930,
				     202.430,
				     203.930,
				     205.430,
				     206.930,
				     208.430,
				     209.930,
				     211.430,
				     212.930,
				     214.430,
				     215.930,
				     217.430,
				     218.930,
				     220.430,
				     221.930,
				     223.430,
				     224.930,
				     226.430,
				     227.930,
				     229.430,
				     230.930,
				     232.430,
				     233.930,
				     235.430,
				     236.930,
				     238.430,
				     239.930,
				     241.430,
				     242.930,
				     244.430,
				     245.930
};

#endif
