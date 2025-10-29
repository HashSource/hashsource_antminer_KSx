int __fastcall sub_D3934(int a1, int a2)
{
  int (__fastcall *v2)(int, _DWORD *); // r3
  int v3; // r4
  _DWORD v5[2]; // [sp+0h] [bp-10h] BYREF
  __int64 v6; // [sp+8h] [bp-8h]

  v2 = *(int (__fastcall **)(int, _DWORD *))(a1 + 268);
  v5[1] = 0;
  v5[0] = a2;
  v6 = 0xFF00150000LL;
  v3 = v2(a1, v5);
  usleep((__useconds_t)&elf_hash_bucket[3497]);
  return v3;
}
