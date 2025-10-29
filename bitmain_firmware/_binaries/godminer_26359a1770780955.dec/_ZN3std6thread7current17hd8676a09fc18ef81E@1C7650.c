int std::thread::current()
{
  int result; // r0

  result = sub_1E6034();
  if ( !result )
    core::option::expect_failed();
  return result;
}
