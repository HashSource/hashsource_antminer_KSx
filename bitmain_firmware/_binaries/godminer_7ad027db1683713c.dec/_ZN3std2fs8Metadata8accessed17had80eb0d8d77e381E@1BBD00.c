int __fastcall std::fs::Metadata::accessed(int result, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r2

  if ( *(_QWORD *)a2 != 1 || (*(_BYTE *)(a2 + 72) & 0x20) == 0 )
  {
    v2 = *(_DWORD *)(a2 + 156);
    if ( v2 <= 0x3B9AC9FF )
    {
      *(_QWORD *)result = *(int *)(a2 + 152);
      *(_DWORD *)(result + 8) = v2;
      return result;
    }
LABEL_7:
    core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2CABF0);
  }
  v3 = *(_DWORD *)(a2 + 32);
  if ( v3 > 0x3B9AC9FF )
    goto LABEL_7;
  *(_QWORD *)result = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(result + 8) = v3;
  return result;
}
