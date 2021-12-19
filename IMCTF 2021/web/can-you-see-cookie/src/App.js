import cookieImage from './cookies.jpg';

function App() {
  document.cookie = decodeURIComponent(escape(atob('ZmxhZz1jblZ1WDNKMWJsOXlkVzVmWVhOZlptRnpkRjk1YjNWZlkyRnVJUT09')))
  return (
    <div className="App" style={{ textAlign: 'center', display: 'flex', flexDirection: 'column' }}>
      <header className="App-header" style={{
        backgroundColor: '#282c34', minHeight: '10vh', display: 'flex',
        flexDirection: 'column', alignItems: 'center', justifyContent: 'center',
        fontSize: 'calc(10px + 2vmin)', color: 'white',
      }}>
        can you see 🍪?
      </header>
      <main style={{ flexGrow: 1 }}>
        <img src={cookieImage} style={{ width: "80%", margin: "5% 10%", borderRadius: "0.2pc" }} alt=""></img>
      </main>
      <footer style={{
        backgroundColor: '#282c34', minHeight: '10vh', display: 'flex',
        flexDirection: 'column', alignItems: 'center', justifyContent: 'center',
        fontSize: 'calc(10px + 2vmin)', color: 'white',
      }}>
        Iron Maiden CTF
      </footer>
    </div >
  );
}

export default App;
