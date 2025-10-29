char *__fastcall hs_keccak_final(int a1, void *a2)
{
  char *result; // r0
  unsigned int v5; // r6
  int v6; // r5

  result = *(char **)(a1 + 392);
  v5 = *(_DWORD *)(a1 + 396);
  if ( (int)result >= 0 )
  {
    v6 = a1 + 200;
    memset(&result[a1 + 200], 0, v5 - (_DWORD)result);
    *(_BYTE *)(v6 + *(_DWORD *)(a1 + 392)) |= 1u;
    *(_BYTE *)(v6 + v5 - 1) = ~((unsigned int)~(*(unsigned __int8 *)(v6 + v5 - 1) << 25) >> 25);
    result = (char *)sub_141294(a1, (_QWORD *)(a1 + 200), v5);
    *(_DWORD *)(a1 + 392) = 0x80000000;
  }
  if ( a2 )
    return (char *)memcpy(a2, (const void *)a1, 100 - (v5 >> 1));
  return result;
}
