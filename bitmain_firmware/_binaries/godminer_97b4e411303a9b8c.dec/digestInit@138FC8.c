int __fastcall digestInit(char *a1, int a2, int a3)
{
  __int64 v5[6]; // [sp+0h] [bp-40h] BYREF
  _BYTE v6[8]; // [sp+30h] [bp-10h] BYREF
  int v7; // [sp+38h] [bp-8h]
  int v8; // [sp+3Ch] [bp-4h]

  v5[0] = 16842752;
  memset(&v5[1], 0, 40);
  v7 = a2;
  v8 = a3;
  qmemcpy(v6, "ZcashPoW", sizeof(v6));
  LOBYTE(v5[0]) = a2 * sub_26D748(512, a2) / 8;
  return blake2b_init_param(a1, v5);
}
