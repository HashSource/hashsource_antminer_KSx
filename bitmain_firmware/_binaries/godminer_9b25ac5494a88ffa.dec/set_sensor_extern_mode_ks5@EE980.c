int __fastcall set_sensor_extern_mode_ks5(int a1)
{
  int (__fastcall *v1)(int, _DWORD *); // r2
  int v3; // r6
  int result; // r0
  _DWORD v5[2]; // [sp+0h] [bp-10h] BYREF
  __int64 v6; // [sp+8h] [bp-8h]

  v1 = *(int (__fastcall **)(int, _DWORD *))(a1 + 260);
  v5[1] = 0;
  v5[0] = 26806532;
  v6 = 16711681;
  v3 = v1(a1, v5);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  result = 0;
  if ( !v3 )
    *(_DWORD *)(a1 + 504) = 1;
  return result;
}
