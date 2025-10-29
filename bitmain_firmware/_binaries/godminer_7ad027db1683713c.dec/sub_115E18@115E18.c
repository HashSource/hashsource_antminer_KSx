ssize_t sub_115E18()
{
  ssize_t result; // r0
  char v1; // [sp+7h] [bp-5h] BYREF

  v1 = 48;
  result = write(dword_2D10A8, &v1, 1u);
  if ( result != 1 )
    return sub_115D80();
  return result;
}
