/* does not include `.` and `..` */
let fileList_Sys = {
  let files = "." |> Sys.readdir |> Array.to_list;
  files |> String.concat(" ");
};

/* includes `.` and `..` */
let fileList_Unix = {
  let dir = Unix.opendir(".");
  let rec build_list = (d, acc) =>
    try (build_list(d, acc @ [Unix.readdir(dir)])) {
    | End_of_file => acc
    };
  build_list(dir, []) |> String.concat(" ");
};

let argList = Sys.argv |> Array.to_list |> String.concat(" ");

print_endline(fileList_Sys);

print_endline(fileList_Unix);

print_endline(argList);
