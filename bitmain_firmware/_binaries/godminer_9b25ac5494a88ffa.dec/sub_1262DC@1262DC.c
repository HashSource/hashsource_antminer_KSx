ssize_t sub_1262DC()
{
  ssize_t result; // r0
  char v1; // [sp+7h] [bp-5h] BYREF

  v1 = 49;
  result = write(dword_2E5C84, &v1, 1u);
  if ( result != 1 )
    return sub_126244();
  return result;
}
