int __fastcall Sha256_Onestep(unsigned __int8 *a1, int a2, int a3)
{
  _DWORD v5[8]; // [sp+0h] [bp-68h] BYREF
  double v6; // [sp+20h] [bp-48h]

  v6 = 0.0;
  v5[0] = 1779033703;
  v5[1] = -1150833019;
  v5[2] = 1013904242;
  v5[3] = -1521486534;
  v5[4] = 1359893119;
  v5[5] = -1694144372;
  v5[6] = 528734635;
  v5[7] = 1541459225;
  Sha256_Update((int)v5, a1, a2);
  return Sha256_Final((int)v5, a3);
}
