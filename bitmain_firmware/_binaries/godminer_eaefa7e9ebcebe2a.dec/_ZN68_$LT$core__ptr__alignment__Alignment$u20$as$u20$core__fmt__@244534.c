int __fastcall <core::ptr::alignment::Alignment as core::fmt::Debug>::fmt(unsigned int *a1, int *a2)
{
  unsigned int v2; // r0
  int v3; // r0
  int v4; // r1
  _DWORD v6[4]; // [sp+0h] [bp-30h] BYREF
  unsigned int v7; // [sp+10h] [bp-20h] BYREF
  unsigned int v8; // [sp+14h] [bp-1Ch] BYREF
  _DWORD v9[6]; // [sp+18h] [bp-18h] BYREF

  v2 = *a1;
  v6[3] = sub_259108;
  v6[2] = &v8;
  v8 = __clz(__rbit32(v2));
  v9[5] = 2;
  v9[4] = v6;
  v9[3] = 3;
  v9[0] = 0;
  v7 = v2;
  v3 = *a2;
  v4 = a2[1];
  v6[0] = &v7;
  v6[1] = sub_2542FC;
  v9[2] = &off_2E3F2C;
  return core::fmt::write(v3, v4, v9);
}
