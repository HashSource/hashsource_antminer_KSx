size_t __fastcall <alloc::string::String as core::clone::Clone>::clone_from(size_t *a1, int a2)
{
  const void *v3; // r6
  size_t v4; // r5
  size_t v5; // r7
  size_t v6; // r0

  v3 = *(const void **)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = 0;
  v6 = *a1;
  a1[2] = 0;
  if ( v6 < v4 )
  {
    sub_7BD1C(a1, 0, v4);
    v5 = a1[2];
  }
  memcpy((void *)(a1[1] + v5), v3, v4);
  a1[2] = v5 + v4;
  return v5 + v4;
}
