let isUnique = (input) => {
    let result = ref(true);

    /* Initialize hashtable */
    let map = Hashtbl.create(26);

    String.iter(
        (x => {
            switch(Hashtbl.find(map, x)) {
                | exception Not_found => ()
                | true =>  result := false; ()
                | false => ()
                };
            Hashtbl.add(map, x, true)
        }),
        input);

    result^
};

print_string(string_of_bool(isUnique("ba")) ++ "\n");
print_string(string_of_bool(isUnique("ba")) ++ "\n");
print_string(string_of_bool(isUnique("abcdefg")) ++ "\n");
print_string(string_of_bool(isUnique("abcdefa")) ++ "\n");
print_string(string_of_bool(isUnique("abcdefghijklmnopqrstuvwxyz")) ++ "\n");
print_string(string_of_bool(isUnique("abcdefghijklmnopqrstuvwxyza")));