int __fastcall std::fs::DirEntry::metadata(_DWORD *a1, int a2)
{
  __int64 v3; // r0
  _QWORD v5[23]; // [sp+0h] [bp-B8h] BYREF

  sub_1EF150(v5, a2);
  if ( v5[0] == 2 )
  {
    v3 = v5[1];
    *a1 = 2;
    a1[1] = 0;
    *((_QWORD *)a1 + 1) = v3;
  }
  else
  {
    LODWORD(v3) = memcpy(a1, v5, 0xB8u);
  }
  return v3;
}
