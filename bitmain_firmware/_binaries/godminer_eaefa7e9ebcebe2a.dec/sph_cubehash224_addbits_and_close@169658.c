void *__fastcall sph_cubehash224_addbits_and_close(_DWORD *a1, char a2, char a3, _BYTE *a4)
{
  void *result; // r0

  sub_166490(a1, a2, a3, a4, 7);
  result = memcpy(a1 + 9, &unk_29C834, 0x80u);
  a1[8] = 0;
  return result;
}
