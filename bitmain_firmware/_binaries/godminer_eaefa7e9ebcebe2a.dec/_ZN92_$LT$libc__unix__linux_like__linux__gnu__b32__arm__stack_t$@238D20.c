// Alternative name is '_ZN75_$LT$libc..unix..linux_like..linux..ucred$u20$as$u20$core..clone..Clone$GT$5clone17h7f85609e08f12b2eE'
// Alternative name is '_ZN59_$LT$libc..unix..protoent$u20$as$u20$core..clone..Clone$GT$5clone17h86445ddf2990d685E'
// Alternative name is '_ZN85_$LT$libc..unix..linux_like..linux..gnu..Elf32_Chdr$u20$as$u20$core..clone..Clone$GT$5clone17h924f8098381d637fE'
// Alternative name is '_ZN85_$LT$libc..unix..linux_like..linux..uinput_ff_erase$u20$as$u20$core..clone..Clone$GT$5clone17h3d1a0449b5ea5846E'
// Alternative name is '_ZN82_$LT$libc..unix..linux_like..linux..gnu..cmsghdr$u20$as$u20$core..clone..Clone$GT$5clone17h2ed2609b20e3a6beE'
_DWORD *__fastcall <libc::unix::linux_like::linux::gnu::b32::arm::stack_t as core::clone::Clone>::clone(
        _DWORD *result,
        int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  *result = v2;
  result[1] = v3;
  result[2] = v4;
  return result;
}
