int __fastcall <std::panicking::rust_panic_without_hook::RewrapBox as core::panic::BoxMeUp>::take_box(int *a1)
{
  int v1; // r2

  v1 = *a1;
  *a1 = 1;
  a1[1] = (int)&off_2E1438;
  return v1;
}
