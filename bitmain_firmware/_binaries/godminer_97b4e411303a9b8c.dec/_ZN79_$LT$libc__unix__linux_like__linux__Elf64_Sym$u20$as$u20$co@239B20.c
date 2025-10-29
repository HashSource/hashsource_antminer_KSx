_DWORD *__fastcall <libc::unix::linux_like::linux::Elf64_Sym as core::clone::Clone>::clone(_DWORD *result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r4
  int v4; // r5
  int v5; // r12
  int v6; // lr

  v2 = a2[1];
  v3 = a2[2];
  v4 = a2[3];
  v5 = a2[4];
  v6 = a2[5];
  *result = *a2;
  result[1] = v2;
  result[2] = v3;
  result[3] = v4;
  result[4] = v5;
  result[5] = v6;
  return result;
}
