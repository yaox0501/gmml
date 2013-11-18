#ifndef PARAMETERFILEANGLE_HPP
#define PARAMETERFILEANGLE_HPP

#include <string>
#include <vector>
#include <iostream>

namespace ParameterFileSpace
{
    class ParameterFileAngle
    {
        public:
            //////////////////////////////////////////////////////////
            //                       Constructor                    //
            //////////////////////////////////////////////////////////
            /*! \fn
              * Default constructor
              */
            ParameterFileAngle();
            /*! \fn
              * Constructor with required parameters
              * @param types A vector of three atom types involving in an angle
              * @param force_constant A double value of constant force between three atoms in an angle
              * @param angle The actual value of angle between three atoms
              * @param dscr A short description for each angle mentioned in a parameter file
              */
            ParameterFileAngle(const std::vector<std::string>& types, double force_constant, double angle, const std::string& dscr = "");
///Delaram
            //////////////////////////////////////////////////////////
            //                           ACCESSOR                   //
            //////////////////////////////////////////////////////////
            /*! \fn
              * An accessor function in order to access to the atom types involved in an angle in the current object
              * @return bonded_atom_indices attribute of the current atom
              */
            std::vector<std::string> GetTypes();
            /*! \fn
              * An accessor function in order to access to force constant attribute of the current object
              * The attribute is set by the contents of the given file
              * @return force_constant_ of the current object of this class
              */
            double GetForceConstant();
            /*! \fn
              * An accessor function in order to access to angle attribute of the current object
              * The attribute is set by the contents of the given file
              * @return angle_ of the current object of this class
              */
            double GetAngle();
            /*! \fn
              * An accessor function in order to access to angle descripion of the current object
              * @return dscr_ attribute of the current object of this class
              */
            std::string GetType();

            //////////////////////////////////////////////////////////
            //                           MUTATOR                    //
            //////////////////////////////////////////////////////////
            /*! \fn
              * A mutator function in order to set the force constant of the current object
              * Set the angle_ attribute of the current angle
              * @param residue_index The index of the residue that the current object belongs to
              */
            void SetForceConstant(double force_constant_);

///Delaram
            //////////////////////////////////////////////////////////
            //                     DISPLAY FUNCTIONS                //
            //////////////////////////////////////////////////////////
            /*! \fn
              * A function to print out the file contents in a structural format
              * Print out the information in a defined structure
              * @param out An output stream, the print result will be written in the given output stream
              */
            void Print(std::ostream& out = std::cout);

        private:
            //////////////////////////////////////////////////////////
            //                         ATTRIBUTES                   //
            //////////////////////////////////////////////////////////
            std::vector<std::string> types_;        /*!< Atom types involved in an angle; Fill by the firs column of the fourth section of the parameter file split by '-'*/
            double force_constant_;                 /*!< Angle force constant; Fill by the second column of the fourth section of the parameter file*/
            double angle_;                          /*!< Angle value; Fill by the third column third column of the fourth section of the parameter file*/
            std::string dscr_;                      /*!< Angle description; Fill by the fourth column of the fourth section of the parameter file*/
            /*!< A sample of the fourth (Angle) sections of the parameter file: C -C -O     80.0      120.00    Junmei et al, 1999 acrolein*/
    };
}

#endif // PARAMETERFILEANGLE_HPP
