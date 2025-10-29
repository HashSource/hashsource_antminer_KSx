int __fastcall std::fs::DirEntry::metadata(_DWORD *a1)
{
  __int64 v2; // r0
  _QWORD v4[23]; // [sp+0h] [bp-B8h] BYREF

  sub_1EBF24(v4);
  if ( v4[0] == 2 )
  {
    v2 = v4[1];
    *a1 = 2;
    a1[1] = 0;
    *((_QWORD *)a1 + 1) = v2;
  }
  else
  {
    LODWORD(v2) = memcpy(a1, v4, 0xB8u);
  }
  return v2;
}
