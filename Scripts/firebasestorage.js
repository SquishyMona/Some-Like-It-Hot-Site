import { getStorage, ref, getDownloadURL } from "./firebase/storage";

const storage = getStorage();

function getPhoto(path, id)
{
    getDownloadURL(ref(storage, path)).then((url) => {
        var elem = document.getElementById(id);
        elem.setAttribute('src', url);
    }).catch((error) => {
        console.log(error);
    });
}