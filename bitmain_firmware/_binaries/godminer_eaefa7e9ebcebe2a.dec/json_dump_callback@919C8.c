int __fastcall json_dump_callback(_DWORD *a1, int (__fastcall *a2)(__int16 *, int, int), int a3, int a4)
{
  int v8; // r4
  _BYTE v10[32]; // [sp+Ch] [bp-20h] BYREF

  if ( (a4 & 0x200) == 0 && (!a1 || *a1 > 1u) || hashtable_init(v10) )
    return -1;
  v8 = sub_91228(a1, a4, 0, (int)v10, a2, a3);
  hashtable_close(v10);
  return v8;
}
