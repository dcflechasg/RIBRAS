//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
// $Id: A01MagneticField.hh,v 1.3 2002/12/13 11:34:29 gunter Exp $
// --------------------------------------------------------------
//
// Original version: J. Zamora 20??
// Modified (October 2018) by: D. Flechas (dcflechasg@unal.edu.co)
//                             Andre (andreserra@ymail.com)
//              

#ifndef MagneticField_H
#define MagneticField_H 1

#include "globals.hh"
#include "G4MagneticField.hh"
#include "G4ThreeVector.hh"
//class AMagneticFieldMessenger;


class MagneticField : public G4MagneticField
{
public:
  MagneticField();
  ~MagneticField();

  virtual void GetFieldValue( const  double Point[3],
                               double *Bfield ) const;
  
private:
  //MagneticFieldMessenger* messenger;
  G4double Bz;
  G4double rmax;
  G4double l_med;
  G4double k;
  G4double field;
  
public:
  inline void SetField(G4double val) { field = val; }
  inline G4double GetField() const { return field; }
    
};

#endif

