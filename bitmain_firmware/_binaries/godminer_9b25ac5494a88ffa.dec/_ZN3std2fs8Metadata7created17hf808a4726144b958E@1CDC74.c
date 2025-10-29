_DWORD *__fastcall std::fs::Metadata::created(_DWORD *result, int a2)
{
  char **v2; // r1
  unsigned int v3; // r2
  __int64 v4; // r4

  if ( *(_QWORD *)a2 != 1 )
  {
    v2 = &off_2DE7D0;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a2 + 73) & 8) == 0 )
  {
    v2 = &off_2DE7DC;
LABEL_5:
    *result = 2;
    result[1] = v2;
    result[2] = 1000000000;
    return result;
  }
  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 > 0x3B9AC9FF )
    core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2DEBF0);
  v4 = *(_QWORD *)(a2 + 8);
  result[2] = v3;
  *(_QWORD *)result = v4;
  return result;
}
