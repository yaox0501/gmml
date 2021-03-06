// Author: Alireza Khatamian

#include "../../../includes/InputSet/PdbFileSpace/pdbheterogensynonymcard.hpp"
#include "../../../includes/InputSet/PdbFileSpace/pdbheterogensynonym.hpp"
#include "../../../includes/utils.hpp"

using namespace std;
using namespace PdbFileSpace;
using namespace gmml;

//////////////////////////////////////////////////////////
//                       CONSTRUCTOR                    //
//////////////////////////////////////////////////////////
PdbHeterogenSynonymCard::PdbHeterogenSynonymCard() : record_name_("HETSYN") {}
PdbHeterogenSynonymCard::PdbHeterogenSynonymCard(const string& record_name) : record_name_(record_name) {}
PdbHeterogenSynonymCard::PdbHeterogenSynonymCard(stringstream &stream_block)
{
    string line;
    bool is_record_name_set = false;
    getline(stream_block, line);
    string temp = line;
    while (!Trim(temp).empty())
    {
        if(!is_record_name_set){
            record_name_ = line.substr(0,6);
            Trim(record_name_);
            is_record_name_set=true;
        }
        stringstream heterogen_synonym_block;
        heterogen_synonym_block << line << endl;
        string heterogen_identifier = line.substr(11,3);

        getline(stream_block, line);
        temp = line;

        while (!Trim(temp).empty() && line.substr(11,3) == heterogen_identifier){
            heterogen_synonym_block << line << endl;
            getline(stream_block, line);
            temp = line;
        }
        PdbHeterogenSynonym* heterogen_synonym = new PdbHeterogenSynonym(heterogen_synonym_block);
        heterogen_identifier = Trim(heterogen_identifier);
        heterogens_synonyms_[heterogen_identifier] = heterogen_synonym;
    }
}

//////////////////////////////////////////////////////////
//                         ACCESSOR                     //
//////////////////////////////////////////////////////////
string PdbHeterogenSynonymCard::GetRecordName()
{
    return record_name_;
}

PdbHeterogenSynonymCard::HeterogenSynonymMap PdbHeterogenSynonymCard::GetHeterogensSynonyms()
{
    return heterogens_synonyms_;
}

//////////////////////////////////////////////////////////
//                          MUTATOR                     //
//////////////////////////////////////////////////////////
void PdbHeterogenSynonymCard::SetRecordName(const string record_name)
{
    record_name_ = record_name;
}

//////////////////////////////////////////////////////////
//                        FUNCTIONS                     //
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//                      DISPLAY FUNCTION                //
//////////////////////////////////////////////////////////
void PdbHeterogenSynonymCard::Print(ostream &out)
{
    out << "Record Name: " << record_name_ << endl <<
           "============ Heterogen Synonyms ===========" << endl;
    for(PdbHeterogenSynonymCard::HeterogenSynonymMap::iterator it = heterogens_synonyms_.begin(); it != heterogens_synonyms_.end(); it++)
    {
        out << "Heterogen ID: " << (it)->first << endl;
        (it)->second->Print();
        out << endl;
    }
}
