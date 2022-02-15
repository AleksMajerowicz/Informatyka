using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using Random = UnityEngine.Random;

public class Okienko : EditorWindow
{ 
    //Folder resources,dodawany jest do builda i pozwala znale�� istniej�ce obiekty.
    [MenuItem("Window/Zadanka")]
    public static void OpenWindows()//Funkaj statyczna,nie wymaga instancji klasy
    {
        GetWindow<Okienko>();
    }

    private void OnGUI()
    {
        if (GUILayout.Button("Dzieki mnie,niebedziesz musia� kompilowac skryptu ;)"))
        {
            GameObject cube = Resources.Load<GameObject>("Cube");
            PrefabUtility.InstantiatePrefab(cube);
        }
        
        if (GUILayout.Button("Dzieki mnie,niebedziesz musia� kompilowac skryptu �eby usun�� cube'y ;)"))
        {
            Transform [] findCube = FindObjectsOfType<Transform>();
            for (int i = 0; i < findCube.Length; i++)
            {
                Debug.Log(findCube[i]);                
                DestroyImmediate(findCube[i].gameObject);
                Debug.Log(findCube[i].gameObject.name);
            }

        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    //W Widnopws > layouts  klikaj�c Defoult,ustawia defoultowe u�o�enie okien.
}
