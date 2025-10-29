unsigned int *std::thread::current()
{
  unsigned int *result; // r0

  result = (unsigned int *)sub_1E9D70();
  if ( !result )
    core::option::expect_failed();
  return result;
}
