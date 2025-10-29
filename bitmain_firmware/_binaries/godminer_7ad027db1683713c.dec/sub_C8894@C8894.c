int __fastcall sub_C8894(int a1)
{
  int (__fastcall *v1)(int, _DWORD *); // r3
  int v2; // r4
  _DWORD v4[2]; // [sp+0h] [bp-10h] BYREF
  __int64 v5; // [sp+8h] [bp-8h] BYREF

  v4[1] = 0;
  v4[0] = 26806532;
  v5 = 0;
  v1 = *(int (__fastcall **)(int, _DWORD *))(a1 + 248);
  LOBYTE(v5) = 1;
  strcpy((char *)&v5 + 2, "8");
  v2 = v1(a1, v4);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return v2;
}
