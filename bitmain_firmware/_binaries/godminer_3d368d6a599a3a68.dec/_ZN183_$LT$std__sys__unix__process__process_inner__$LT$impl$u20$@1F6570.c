int __fastcall <std::sys::unix::process::process_inner::<impl std::sys::unix::process::process_common::Command>::posix_spawn::PosixSpawnFileActions as core::ops::drop::Drop>::drop(
        posix_spawn_file_actions_t **a1)
{
  return posix_spawn_file_actions_destroy(*a1);
}
