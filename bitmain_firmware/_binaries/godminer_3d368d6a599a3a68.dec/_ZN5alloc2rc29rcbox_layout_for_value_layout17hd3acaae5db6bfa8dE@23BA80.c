int __fastcall alloc::rc::rcbox_layout_for_value_layout(unsigned int a1, unsigned int a2)
{
  int v2; // r11
  int v3; // r2
  int v4; // r2
  bool v5; // cf
  int v6; // r2
  char v8[4]; // [sp+4h] [bp-Ch] BYREF
  int v9; // [sp+8h] [bp-8h]

  v3 = (a2 + 7) & -a2;
  if ( a2 <= 4 )
    a2 = 4;
  v4 = v3 - 8;
  v5 = __CFADD__(v4, 8);
  v6 = v4 + 8;
  if ( !v5 )
  {
    v5 = __CFADD__(v6, a1);
    a1 += v6;
  }
  if ( v5 || 0x80000000 - a2 < a1 )
  {
    v9 = v2;
    core::result::unwrap_failed((int)&unk_2B2AA8, 43, (int)v8, (int)&off_2E3734, (int)&off_2E3854);
  }
  return (a2 + a1 - 1) & -a2;
}
