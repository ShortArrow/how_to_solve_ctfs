function getFlag() {
    alert("welcome to imctf")
    console.log("imctf{we_don't_need_logging_any_more}")
    console.clear()
    console.log("imctf{is_this_flag?_final_answer?}")
}
document.getElementById("root").addEventListener("click", getFlag);
console.log = () => { }