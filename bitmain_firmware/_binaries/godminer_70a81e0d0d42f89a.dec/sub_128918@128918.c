ssize_t sub_128918()
{
  ssize_t result; // r0
  char v1; // [sp+7h] [bp-5h] BYREF

  v1 = 49;
  result = write(dword_2E8F98, &v1, 1u);
  if ( result != 1 )
    return sub_128880();
  return result;
}
