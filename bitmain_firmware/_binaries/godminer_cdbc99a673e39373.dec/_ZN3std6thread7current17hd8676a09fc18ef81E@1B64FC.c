int std::thread::current()
{
  int result; // r0

  result = sub_1D4EE0();
  if ( !result )
    core::option::expect_failed();
  return result;
}
