/******************************************************************************
 *
 * 
 *
 * Copyright (C) 1997-2003 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

// translation by Matjaz Ostroversnik <matjaz.ostroversnik@zrs-tk.si>

#ifndef TRANSLATOR_SI_H
#define TRANSLATOR_SI_H


class TranslatorSlovene : public TranslatorAdapter_1_2_16
{
  public:
    QCString idLanguage()
    { return "slovene"; }
    /*! Used to get the command(s) for the language support. This method
     *  was designed for languages which do not prefer babel package.
     *  If this methods returns empty string, then the latexBabelPackage()
     *  method is used to generate the command for using the babel package.
     */
    QCString latexLanguageSupportCommand()
    {
      return "\\usepackage[slovene]{babel} \n\\usepackage[latin2]{inputenc} \n\\usepackage[T1]{fontenc}\n";
    }
    QCString idLanguageCharset()
    { 
#ifdef _WIN32
      return "windows-1250"; 
#else
      return "iso-8859-2"; 
#endif
    }
    QCString trRelatedFunctions()
    { return "Povezane funkcije"; }
    QCString trRelatedSubscript()
    { return "(To niso metode.)"; }
    QCString trDetailedDescription()
    { return "Podroben opis"; }
    QCString trMemberTypedefDocumentation()
    { return "Opis uporabni�ko definiranih tipov"; }
    QCString trMemberEnumerationDocumentation()
    { return "Opis komponent  na�tevnih tipov"; }
    QCString trEnumerationValueDocumentation()
    { return "Opis vrednosti na�tevnih tipov (enum) "; }
    QCString trMemberFunctionDocumentation()
    { return "Opis metod"; }
    QCString trMemberDataDocumentation()
    { return "Opis atributov"; }
    QCString trMore()
    { return "..."; }
    QCString trListOfAllMembers()
    { return "Seznam vseh metod / atributov."; }
    QCString trMemberList()
    { return " - seznam metod in atributov."; }
    QCString trThisIsTheListOfAllMembers()
    { return "Seznam metod razreda "; }
    QCString trIncludingInheritedMembers()
    { return ", vklju�ujo� dedovane metode in atribute."; }
    QCString trGeneratedAutomatically(const char *s)
    { QCString result="zgenerirano z Doxygen-om"; 
      if (s) result+=(QCString)" za "+s;
      result+=" iz izvorne kode."; 
      return result;
    }
    QCString trEnumName()
    { return "na�tevno ime"; }
    QCString trEnumValue()
    { return "na�tevna vrednost"; }
    QCString trDefinedIn()
    { return "definirano v"; }
    QCString trModules()
    { return "moduli"; }
    QCString trClassHierarchy()
    { return "dedovalna hierarhija"; }
    QCString trCompoundList()
    { return "kratek opis razredov"; }
    QCString trFileList()
    { return "seznam datotek"; }
    QCString trHeaderFiles()
    { return "'Header' datoteka"; }
    QCString trCompoundMembers()
    { return "metode in atributi"; }
    QCString trFileMembers()
    { return "komponente v datotekah"; }
    QCString trRelatedPages()
    { return "dodatni opisi"; }
    QCString trExamples()
    { return "Primeri"; }
    QCString trSearch()
    { return "I��i"; }
    QCString trClassHierarchyDescription()
      { return "Hierarhi�no drevo je (okvirno) sortirano po abecedi. ";
    }
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="Seznam vseh ";
      if (!extractAll) result+="dokumentiranih ";
      result+="datotek s kratkim opisom:";
      return result;
    }
    QCString trCompoundListDescription()
    { return "Seznam razredov, mno�ic in struktur "
             "s kratkim opisom :"; 
    }
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Seznam vseh ";
      if (!extractAll) result+="dokumentiranih ";
      result+="metod in atributov s povezavami na ";
      if (extractAll) result+="opis posamezne metode in/ali atributa:";
      else result+="opis razreda :";
      return result;
    }
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Seznam ";
      if (!extractAll) result+="dokumentiranih ";
      result+="entitet v datotekah ";
      if (extractAll) result+="skupaj z opisom datoteke v kateri se nahajajo:";
      else result+="s povezavami na datoteke v katerih se nahajajo:";
      return result;
    }
    QCString trHeaderFilesDescription()
    { return "Seznam header datotek, ki tvorijo aplikacijski vmesnik (API) :"; }
    QCString trExamplesDescription()
    { return "Seznam primerov :"; }
    QCString trRelatedPagesDescription()
    { return "Seznam strani z dodatnimi opisi:"; }
    QCString trModulesDescription()
    { return "Seznam modulov:"; }
    QCString trNoDescriptionAvailable()
    { return "Opis ni dostopen"; }

    QCString trDocumentation()
    { return "Dokumentacija"; }
    QCString trModuleIndex()
    { return "seznam modulov"; }
    QCString trHierarchicalIndex()
    { return "Hierarhi�ni indeks"; }
    QCString trCompoundIndex()
    { return "abecedni seznam"; }
    QCString trFileIndex() 
    { return "seznam datotek"; }
    QCString trModuleDocumentation()
    { return "Dokumentacija modulov"; }
    QCString trClassDocumentation()
    { return "Opis razreda"; }
    QCString trFileDocumentation()
    { return "Opis datoteke"; }
    QCString trExampleDocumentation()
    { return "Opis primera"; }
    QCString trPageDocumentation()
    { return "Opis povezanih strani"; }
    QCString trReferenceManual()
    { return "Priro�nik"; }

    QCString trDefines()
    { return "Makro deklaracije"; }
    QCString trFuncProtos()
    { return "Prototipi funkcij"; }
    QCString trTypedefs()
    { return "Uporabni�ko definirani tipi"; }
    QCString trEnumerations()
    { return "Na�tevni tipi"; }
    QCString trFunctions()
    { return "Funkcije"; }
    QCString trVariables()
    { return "Spremenljivke"; }
    QCString trEnumerationValues()
    { return "Vrednosti na�tevnih tipov"; }
    QCString trDefineDocumentation()
    { return "Opis makro definicije"; }
    QCString trFunctionPrototypeDocumentation()
    { return "Opis prototipa funkcije"; }
    QCString trTypedefDocumentation()
    { return "Opis uporabni�ko definiranega tipa"; }
    QCString trEnumerationTypeDocumentation()
    { return "Opis na�tevnega (enum) tipa"; }
    QCString trFunctionDocumentation()
    { return "Opis funkcije"; }
    QCString trVariableDocumentation()
    { return "Opis spremenljivke"; }
    QCString trCompounds()
    { return "Strukture"; }
    QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result=(QCString)"Generirano "+date;
      if (projName) result+=(QCString)" projekt: "+projName;
      result+=(QCString)" generator: ";
      return result;
    }
    QCString trWrittenBy()
    {
      return "napisal ";
    }
    QCString trClassDiagram(const char *clName)
    {
      return (QCString)"Diagram razredov za "+clName;
    }
    QCString trForInternalUseOnly()
    { return "Samo za interno uporabo."; }
    QCString trReimplementedForInternalReasons()
    { return "Ponovno implementirano zaradi internih razlogov. "
             "Nima vpliva na API."; 
    }
    QCString trWarning()
    { return "Opozorilo"; }
    QCString trBugsAndLimitations()
    { return "Napake in omejtive"; }
    QCString trVersion()
    { return "Verzija"; }
    QCString trDate()
    { return "Datum"; }
    QCString trReturns()
    { return "Rezultat(i)"; }
    QCString trSeeAlso()
    { return "Glej"; }
    QCString trParameters()
    { return "Parametri"; }
    QCString trExceptions()
    { return "Prekinitve"; }
    QCString trGeneratedBy()
    { return "Izdelano s pomo�jo"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990307 
//////////////////////////////////////////////////////////////////////////
    
    QCString trNamespaceList()
    { return "imenski prostori"; }
    QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Seznam ";
      if (!extractAll) result+="dokumentiranih ";
      result+="imenskih prostorov z opisom:";
      return result;
    }
    QCString trFriends()
    { return "Prijatelji (Friends) "; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////
    
    QCString trRelatedFunctionDocumentation()
    { return "Podatki o poveznih funkcijah"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    QCString trCompoundReference(const char *clName,
                                    ClassDef::CompoundType compType,
                                    bool /*isTemplate*/)
      // used as the title of the HTML page of a class/struct/union
    {
      QCString result="";
      switch(compType)
      {
        case ClassDef::Class:  result+=" Razred "; break;
        case ClassDef::Struct: result+=" Struktura "; break;
        case ClassDef::Union:  result+=" Mno�ica "; break;
        case ClassDef::Interface:  result+=" IDL vmesnik "; break;
        case ClassDef::Exception:  result+=" IDL prekinitev "; break;
      }
	  result += (QCString)clName;
      
      return result;
    }
    QCString trFileReference(const char *fileName)
      // used as the title of the HTML page of a file
    {
      QCString result="Datoteka "; 
	  result+=fileName;
	  return result;
    }
    QCString trNamespaceReference(const char *namespaceName)
      // used as the title of the HTML page of a namespace
    {
      QCString result ="Imenski prostor ";
	  result+=namespaceName;
      
      return result;
    }
    
    // these are for the member sections of a class, struct or union 
    QCString trPublicMembers()
    { return "Javne metode"; }
    QCString trPublicSlots()
    { return "Public slotovi"; }
    QCString trSignals()
    { return "Programske prekinitve"; }
    QCString trStaticPublicMembers()
    { return "Stati�ne javne metode in atributi"; }
    QCString trProtectedMembers()
    { return "Za��itene metode in atributi"; }
    QCString trProtectedSlots()
    { return "Za��iteni sloti"; }
    QCString trStaticProtectedMembers()
    { return "Stati�ne za��itene metode in atributi"; }
    QCString trPrivateMembers()
    { return "Skrite metode in atributi"; }
    QCString trPrivateSlots()
    { return "Skriti slotovi"; }
    QCString trStaticPrivateMembers()
    { return "Stati�ne skrite metode in atributi"; }
    // end of member sections 
    
    QCString trWriteList(int numEntries)
    {
      // this function is used to produce a comma-separated list of items.
      // use generateMarker(i) to indicate where item i should be put.
      QCString result;
      int i;
      // the inherits list contain `numEntries' classes
      for (i=0;i<numEntries;i++) 
      {
        // use generateMarker to generate placeholders for the class links!
        result+=generateMarker(i); // generate marker for entry i in the list 
                                   // (order is left to right)
        
        if (i!=numEntries-1)  // not the last entry, so we need a separator
        {
          if (i<numEntries-2) // not the fore last entry 
            result+=", ";
          else                // the fore last entry
            result+=" in ";
        }
      }
      return result; 
    }
    
    QCString trInheritsList(int numEntries)
      // used in class documentation to produce a list of base classes,
      // if class diagrams are disabled.
    {
      return "Deduje od "+trWriteList(numEntries)+".";
    }
    QCString trInheritedByList(int numEntries)
      // used in class documentation to produce a list of super classes,
      // if class diagrams are disabled.
    {
      return "Naslije�ena u "+trWriteList(numEntries)+".";
    }
    QCString trReimplementedFromList(int numEntries)
      // used in member documentation blocks to produce a list of 
      // members that are hidden by this one.
    {
      return "Skrije implementacijo iz "+trWriteList(numEntries)+".";
    }
    QCString trReimplementedInList(int numEntries)
    {
      // used in member documentation blocks to produce a list of
      // all member that overwrite the implementation of this member.
      return "Metodo skrijejo implementacije v razredih "+trWriteList(numEntries)+".";
    }

    QCString trNamespaceMembers()
      // This is put above each page as a link to all members of namespaces.
    { return "elementi imenskega prostora"; }
    QCString trNamespaceMemberDescription(bool extractAll)
      // This is an introduction to the page with all namespace members
    { 
      QCString result="Seznam vseh ";
      if (!extractAll) result+="dokumentiranih ";
      result+="elementov imenskega prostora s povezavami na ";
      if (extractAll) 
        result+="opis vsakega elementa:";
      else 
        result+="imenski prostor, ki mu pripadajo:";
      return result;
    }
    QCString trNamespaceIndex()
      // This is used in LaTeX as the title of the chapter with the 
      // index of all namespaces.
    { return "Indeks imenskih prostorov"; }
    QCString trNamespaceDocumentation()
      // This is used in LaTeX as the title of the chapter containing
      // the documentation of all namespaces.
    { return "Podatki o imenskih prostorih"; }
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    virtual QCString trNamespaces()
    { return "Imenski prostori"; }


//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result=(QCString)"Opis ";
      switch(compType)
      {
        case ClassDef::Class:      result+="razreda"; break;
        case ClassDef::Struct:     result+="strukture"; break;
        case ClassDef::Union:      result+="unije"; break;
        case ClassDef::Interface:  result+="vmesnika (interface)"; break;
        case ClassDef::Exception:  result+="prekinitve (exception)"; break;
      }
      result+=" je zgrajen na podlagi naslednj";
      if (single) result+="e "; else result+="ih";
      result+=" datotek";
      if (single) result+="e :"; else result+=" :";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    QCString trAlphabeticalList()
    { return "abecedni seznam"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    QCString trReturnValues()
    { return "Povratna vrednost"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    QCString trMainPage()
    { return "prva stran"; }

    /*! This is used in references to page that are put in the LaTeX 
     *  documentation. It should be an abbreviation of the word page.
     */
    QCString trPageAbbreviation()
    { return "str."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991106
//////////////////////////////////////////////////////////////////////////

    QCString trSources()
    {
      return "Izvorne datoteke";
    }
    QCString trDefinedAtLineInSourceFile()
    {
      return "Definirano v @0 vrstici datoteke @1.";
    }
    QCString trDefinedInSourceFile()
    {
      return "Definirano v datoteki @0.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    QCString trDeprecated()
    {
      return "Zastarelo";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)"Kolaboracijski diagram razreda "+clName+":";
    }
    /*! this text is put before an include dependency graph */
    QCString trInclDepGraph(const char *fName)
    {
      return (QCString)"Graf prikazuje seznam datotek, "
          "ki jih datoteka \""+fName+"\" "
          "direktno ali indirektno vklju�uje. Pravokotniki ponazarjajo datoteke, pu��ice "
	  "predstavljajo relacije med njimi. "
	  "�rn pravokotnik ponazarja datoteko "+fName+". Pu��ice A->B ponazarjajo "
	  "usmerjeno relacijo \"A vklju�uje B\"."
;
    }
    /*! header that is put before the list of constructor/destructors. */
    QCString trConstructorDocumentation()
    {
      return "Opis konstruktorjev in destruktorjev "; 
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    QCString trGotoSourceCode()
    {
      return "izvorna koda";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    QCString trGotoDocumentation()
    {
      return "dokumenacija teko�e datoteke.";
    }
    /*! Text for the \pre command */
    QCString trPrecondition()
    {
      return "Predpogoji (preconditions)";
    }
    /*! Text for the \post command */
    QCString trPostcondition()
    {
      return "Naknadni pogoji (posconditions)";
    }
    /*! Text for the \invariant command */
    QCString trInvariant()
    {
      return "Invarianta";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    QCString trInitialValue()
    {
      return "Za�etna vrednost / definicija :";
    }
    /*! Text used the source code in the file index */
    QCString trCode()
    {
      return "koda";
    }
    QCString trGraphicalHierarchy()
    {
      return "Hierarhija razredov v grafi�ni obliki";
    }
    QCString trGotoGraphicalHierarchy()
    {
      return "Dedovalna hierarhija v grafi�ni obliki";
    }
    QCString trGotoTextualHierarchy()
    {
      return "Dedovalna hierarhija v tekstovni obliki";
    }
    QCString trPageIndex()
    {
      return "Indeks strani";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////
    
    QCString trNote()
    {
      return "Opomba";
    }
    QCString trPublicTypes()
    {
      return "Javni tipi";
    }
    QCString trPublicAttribs()
    {
      return "Javni atributi";
    }
    QCString trStaticPublicAttribs()
    {
      return "Stati�ni javni atributi";
    }
    QCString trProtectedTypes()
    {
      return "Za��iteni tipi";
    }
    QCString trProtectedAttribs()
    {
      return "Za��iteni atributi";
    }
    QCString trStaticProtectedAttribs()
    {
      return "Stati�ni za��iteni tipi";
    }
    QCString trPrivateTypes()
    {
      return "Skriti tipi";
    }
    QCString trPrivateAttribs()
    {
      return "Skriti atributi";
    }
    QCString trStaticPrivateAttribs()
    {
      return "Stati�ni skriti atributi";
    }
//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a todo item */
    virtual QCString trTodo()
    {
      return "TODO";
    }
    /*! Used as the header of the todo list */
    virtual QCString trTodoList()
    {
      return "Seznam nedokon�anih opravil";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    virtual QCString trReferencedBy()
    {
      return "Uporabniki entitete:  ";
    }
    virtual QCString trRemarks()
    {
      return "Opomba";
    }
    virtual QCString trAttention()
    {
      return "Pozor";
    }
    virtual QCString trInclByDepGraph()
    {
      return "Graf prikazuje datoteke, ki posredno ali neposredno "
             "vklju�ujejo teko�o datoteko. Pravokotniki simbolizirajo datoteke, "
             "pu��ice pa relacije med datotekami. Teko�a datoteka je prikazana "
	     "kot pravokotnik s �rno podlago, ostale pa kot pravokotnik brez podlage. "
	     "Smer pu��ice A->B definira relacijo \"A vklju�uje B\". "
	     "Vse datoteke, ki torej mejijo na teko�o (t.j. obstaja povezava med �rnim in "
	     "praznim pravokotnikom), jo direktno vklju�ujejo, medtem, ko jo ostale vklju�ujejo "
	     "le posredno. "
	;
    }
    virtual QCString trSince()
    {
      return "Od";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.5
//////////////////////////////////////////////////////////////////////////

    /*! title of the graph legend page */
    virtual QCString trLegendTitle()
    {
      return "Legenda grafa";
    }
    /*! page explaining how the dot graph's should be interpreted 
     *  The %A in the text below are to prevent link to classes called "A".
     */
    virtual QCString trLegendDocs()
    {
      return 
        "Teko�a stran pojasnjuje na�in interpretacije grafov, ki jih izri�e "
        "doxygen.<p>\n"
        "Poglejmo si naslednji primer:\n"
        "\\code\n"
        "/*! Nevide razred zaradi rezanja */\n"
        "class Invisible { };\n\n"
        "/*! Odrezan razred, dedovalna relacija je skrita */\n"
        "class Truncated : public Invisible { };\n\n"
        "/* razred, ki ni opisan z doxygen komentarji */\n"
        "class Undocumented { };\n\n"
        "/*! Razred, ki ga dedujemo s pomo�jo javnega dedovanja */\n"
        "class PublicBase : public Truncated { };\n\n"
        "/*! Razred, ki ga dedujemo s pomo�jo za��itenega dedovanja */\n"
        "class ProtectedBase { };\n\n"
        "/*! Razred, ki ga dedujemo s pomo�jo skritega dedovanja */\n"
        "class PrivateBase { };\n\n"
        "/*! Razred, ki ga uporablja dedovani razred */\n"
        "class Used { };\n\n"
        "/*! Super class that inherits a number of other classes */\n"
        "class Inherited : public PublicBase,\n"
        "                  protected ProtectedBase,\n"
        "                  private PrivateBase,\n"
        "                  public Undocumented\n"
        "{\n"
        "  private:\n"
        "    Used *m_usedClass;\n"
        "};\n"
        "\\endcode\n"
        "If the \\c MAX_DOT_GRAPH_HEIGHT tag in the configuration file "
        "is set to 200 this will result in the following graph:"
        "<p><center><img src=\"graph_legend."+Config_getEnum("DOT_IMAGE_FORMAT")+"\"></center>\n"
        "<p>\n"
        "The boxes in the above graph have the following meaning:\n"
        "<ul>\n"
        "<li>%A filled black box represents the struct or class for which the "
        "graph is generated.\n"
        "<li>%A box with a black border denotes a documented struct or class.\n"
        "<li>%A box with a grey border denotes an undocumented struct or class.\n"
        "<li>%A box with a red border denotes a documented struct or class for\n"
        "which not all inheritance/containment relations are shown. %A graph is "
        "truncated if it does not fit within the specified boundaries."
        "</ul>\n"
        "The arrows have the following meaning:\n"
        "<ul>\n"
        "<li>%A dark blue arrow is used to visualize a public inheritance "
        "relation between two classes.\n"
        "<li>%A dark green arrow is used for protected inheritance.\n"
        "<li>%A dark red arrow is used for private inheritance.\n"
        "<li>%A purple dashed arrow is used if a class is contained or used "
        "by another class. The arrow is labeled with the variable(s) "
        "through which the pointed class or struct is accessible. \n"
        "</ul>\n";
    }
    /*! text for the link to the legend page */
    virtual QCString trLegend()
    {
      return "legenda";
    }
    
//////////////////////////////////////////////////////////////////////////
// new since 1.2.0
//////////////////////////////////////////////////////////////////////////
    
    /*! Used as a marker that is put before a test item */
    virtual QCString trTest()
    {
      return "Test";
    }
    /*! Used as the header of the test list */
    virtual QCString trTestList()
    {
      return "Test List";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.1
//////////////////////////////////////////////////////////////////////////

    /*! Used as a section header for KDE-2 IDL methods */
    virtual QCString trDCOPMethods()
    {
      return "DCOP metode";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.2
//////////////////////////////////////////////////////////////////////////

    /*! Used as a section header for IDL properties */
    virtual QCString trProperties()
    {
      return "IDL Lastnosti";
    }
    /*! Used as a section header for IDL property documentation */
    virtual QCString trPropertyDocumentation()
    {
      return "Opis IDL lastnosti";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.4
//////////////////////////////////////////////////////////////////////////

    /*! Used for Java interfaces in the summary section of Java packages */
    virtual QCString trInterfaces()
    {
      return "Vmesniki";
    }
    /*! Used for Java classes in the summary section of Java packages */
    virtual QCString trClasses()
    {
      if (Config_getBool("OPTIMIZE_OUTPUT_FOR_C"))
      {
        return "Podatkovne strukture";
      }
      else
      {
        return "Razredi";
      }
    }
    /*! Used as the title of a Java package */
    virtual QCString trPackage(const char *name)
    {
      return (QCString)"JAVA paket "+name;
    }
    /*! Title of the package index page */
    virtual QCString trPackageList()
    {
      return "Seznam JAVA paketov";
    }
    /*! The description of the package index page */
    virtual QCString trPackageListDescription()
    {
      return "Seznam JAVA paketov in njihovih kratkih opisov v primeru, da obstajajo:";
    }
    /*! The link name in the Quick links header for each page */
    virtual QCString trPackages()
    {
      return "JAVA paketi";
    }
    /*! Used as a chapter title for Latex & RTF output */
    virtual QCString trPackageDocumentation()
    {
      return "Opisi JAVA paketov";
    }
    /*! Text shown before a multi-line define */
    virtual QCString trDefineValue()
    {
      return "Vrednost:";
    }
    
//////////////////////////////////////////////////////////////////////////
// new since 1.2.5
//////////////////////////////////////////////////////////////////////////
    
    /*! Used as a marker that is put before a \\bug item */
    virtual QCString trBug()
    {
      return "Programska napaka";
    }
    /*! Used as the header of the bug list */
    virtual QCString trBugList()
    {
      return "Seznam programskih napak";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.6
//////////////////////////////////////////////////////////////////////////

    /*! Used as ansicpg for RTF file 
     * 
     * The following table shows the correlation of Charset name, Charset Value and 
     * <pre>
     * Codepage number:
     * Charset Name       Charset Value(hex)  Codepage number
     * ------------------------------------------------------
     * DEFAULT_CHARSET           1 (x01)
     * SYMBOL_CHARSET            2 (x02)
     * OEM_CHARSET             255 (xFF)
     * ANSI_CHARSET              0 (x00)            1252
     * RUSSIAN_CHARSET         204 (xCC)            1251
     * EE_CHARSET              238 (xEE)            1250
     * GREEK_CHARSET           161 (xA1)            1253
     * TURKISH_CHARSET         162 (xA2)            1254
     * BALTIC_CHARSET          186 (xBA)            1257
     * HEBREW_CHARSET          177 (xB1)            1255
     * ARABIC _CHARSET         178 (xB2)            1256
     * SHIFTJIS_CHARSET        128 (x80)             932
     * HANGEUL_CHARSET         129 (x81)             949
     * GB2313_CHARSET          134 (x86)             936
     * CHINESEBIG5_CHARSET     136 (x88)             950
     * </pre>
     * 
     */
    virtual QCString trRTFansicp()
    {
      return "1250";
    }
    

    /*! Used as ansicpg for RTF fcharset 
     *  \see trRTFansicp() for a table of possible values.
     */
    virtual QCString trRTFCharSet()
    {
      return "0";
    }

    /*! Used as header RTF general index */
    virtual QCString trRTFGeneralIndex()
    {
      return "Indeks";
    }
   
    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trClass(bool first_capital, bool singular)
    { 
      QCString result((first_capital ? "Razred" : "razred"));
      if (!singular)  result+="i";
      return result; 
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trFile(bool first_capital, bool singular)
    { 
      QCString result((first_capital ? "Datotek" : "datotek"));
      if (!singular)  result+="e";
      else result += "a";
      return result; 
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trNamespace(bool first_capital, bool singular)
    { 
      QCString result((first_capital ? "Imenski prostor" : "imenski prostor"));
      if (!singular)  result+="i";
      return result; 
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trGroup(bool first_capital, bool singular)
    { 
      QCString result((first_capital ? "Skupina" : "skupina"));
      if (!singular)  result+="s";
      return result; 
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trPage(bool first_capital, bool singular)
    { 
      QCString result((first_capital ? "Stran" : "stran"));
      if (!singular)  result+="i";
      return result; 
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trMember(bool first_capital, bool singular)
    { 
      QCString result((first_capital ? "Element" : "element"));
      if (!singular)  result+="i";
      return result; 
    }
   
    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trField(bool first_capital, bool singular)
    { 
      QCString result((first_capital ? "Polj" : "polj"));
      if (!singular)  result+="a";
      else result += "e";
      return result; 
    }

    /*! This is used for translation of the word that will possibly
     *  be followed by a single name or by a list of names 
     *  of the category.
     */
    virtual QCString trGlobal(bool first_capital, bool singular)
    { 
      QCString result((first_capital ? "Global" : "global"));
      if (!singular)  result+="s";
      return result; 
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.7
//////////////////////////////////////////////////////////////////////////

    /*! This text is generated when the \\author command is used and
     *  for the author section in man pages. */
    virtual QCString trAuthor(bool first_capital, bool singular)
    {                                                                         
      QCString result((first_capital ? "Avtor" : "avtor"));
      if (!singular)  result+="ji";
      return result; 
    }
//////////////////////////////////////////////////////////////////////////
// new since 1.2.11
//////////////////////////////////////////////////////////////////////////

    /*! This text is put before the list of members referenced by a member
     */
    virtual QCString trReferences()
    {
      return "Reference";
    }
//////////////////////////////////////////////////////////////////////////
// new since 1.2.13
//////////////////////////////////////////////////////////////////////////

    /*! used in member documentation blocks to produce a list of 
     *  members that are implemented by this one.
     */
    virtual QCString trImplementedFromList(int numEntries)
    {
      return "Implementira "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all members that implement this abstract member.
     */
    virtual QCString trImplementedInList(int numEntries)
    {
      return "Implementirano v "+trWriteList(numEntries)+".";
    }

};

#endif








