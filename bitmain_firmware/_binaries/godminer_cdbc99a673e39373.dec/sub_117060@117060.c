ssize_t sub_117060()
{
  ssize_t result; // r0
  char v1; // [sp+7h] [bp-5h] BYREF

  v1 = 49;
  result = write(dword_2D2598, &v1, 1u);
  if ( result != 1 )
    return sub_116FC8();
  return result;
}
