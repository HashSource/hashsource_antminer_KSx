int __fastcall update_recorded_timeout_value(unsigned __int64 a1)
{
  int v1; // r3
  unsigned __int64 v2; // r6
  unsigned __int64 *v3; // r2
  int v4; // r12
  unsigned __int64 v5; // r4
  unsigned __int64 v6; // t1
  bool v7; // cf

  v1 = 0;
  v2 = -1;
  v3 = max_timeout_value;
  v4 = 0;
  do
  {
    v6 = *v3++;
    v5 = v6;
    v7 = v6 >= v2;
    if ( v6 < v2 )
      v4 = v1;
    ++v1;
    if ( !v7 )
      v2 = v5;
  }
  while ( v1 != 10 );
  if ( v2 < a1 )
    max_timeout_value[v4] = a1;
  return a1;
}
