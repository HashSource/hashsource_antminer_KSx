int hal_chain_max_num()
{
  _DWORD *v0; // r3
  int result; // r0
  int v2; // t1

  v0 = dword_28346C;
  result = 0;
  while ( ++result != 16 )
  {
    v2 = v0[4];
    v0 += 4;
    if ( v2 == -1 && v0[1] == -1 && v0[2] == -1 && v0[3] == -1 )
      break;
  }
  return result;
}
