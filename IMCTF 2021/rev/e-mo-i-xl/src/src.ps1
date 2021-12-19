$password = (Read-Host "Password")
$txt = [System.Text.Encoding]::Default.GetString(
    [System.Convert]::FromBase64String(
        (
            @("5a", "56", "39", "74", "62", "31", "39", "30", "61", "57", "39", "75", "58", "32", "4a", "35", "58", "32", "4e", "68", "63", "6d", "78", "35", "58", "33", "4a", "68", "5a", "56", "39", "71", "5a", "58", "42", "7a", "5a", "57", "34", "3d") |
            ForEach-Object { [char][byte]"0x$_" }
        ) -join ""
    )
)
$txt2 = [System.Text.Encoding]::Default.GetString(
    [System.Convert]::FromBase64String(
        (
            @("5a", "6d", "78", "68", "5a", "79", "41", "36", "49", "47", "6c", "74", "59", "33", "52", "6d", "65", "30", "6c", "66", "63", "6d", "56", "68", "62", "47", "78", "35", "58", "33", "4a", "6c", "59", "57", "78", "73", "65", "56", "39", "79", "5a", "57", "46", "73", "62", "48", "6c", "66", "63", "6d", "56", "68", "62", "47", "78", "35", "58", "33", "4a", "6c", "59", "57", "78", "73", "65", "56", "39", "79", "5a", "57", "46", "73", "62", "48", "6c", "66", "62", "47", "6c", "72", "5a", "56", "39", "35", "62", "33", "56", "39") |
            ForEach-Object { [char][byte]"0x$_" }
        ) -join ""
    )
)
$isPassed = ($password -eq $txt)
Write-Host ($isPassed ? "good you are passed" : "incorrect password") -ForegroundColor ($isPassed ? "Green" : "Red")
if ($isPassed) {
    Write-Host $txt2 -ForegroundColor Blue
}
$host.UI.RawUI.ReadKey() | Out-Null
