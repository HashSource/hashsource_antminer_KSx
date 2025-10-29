_DWORD *__fastcall set_dev_invalid_hal(int a1)
{
  _DWORD *result; // r0
  int v2; // r1

  result = &g_chain_info[2 * a1];
  v2 = total_chain - 1;
  *((_BYTE *)result + 4) = 0;
  total_chain = v2;
  return result;
}
