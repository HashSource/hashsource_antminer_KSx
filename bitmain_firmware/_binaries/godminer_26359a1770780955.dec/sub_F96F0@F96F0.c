int __fastcall sub_F96F0(int a1, char a2, __int16 a3, int a4)
{
  int (__fastcall *v4)(int, _DWORD *); // r3
  int v5; // r4
  _DWORD v7[2]; // [sp+0h] [bp-10h] BYREF
  __int64 v8; // [sp+8h] [bp-8h]

  v7[1] = 0;
  v7[0] = a4;
  v8 = 0;
  v4 = *(int (__fastcall **)(int, _DWORD *))(a1 + 268);
  BYTE4(v8) = a2;
  WORD1(v8) = a3;
  LOBYTE(v8) = 1;
  v5 = v4(a1, v7);
  usleep((__useconds_t)&elf_hash_bucket[3497]);
  return v5;
}
