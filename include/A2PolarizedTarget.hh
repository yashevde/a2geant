
#ifndef A2PolarizedTarget_h
#define A2PolarizedTarget_h 1

#include "A2Target.hh"
#include "A2MagneticField.hh"

#include "A2Detector.hh"
#include "A2SD.hh"

class A2PolarizedTarget: public  A2Target
{

public:
  A2PolarizedTarget();
  ~A2PolarizedTarget();

  void MakeSensitiveDetector();

  virtual G4VPhysicalVolume* Construct(G4LogicalVolume *MotherLogic);

  // Set magnetic field according to the field map
  virtual void SetMagneticField(G4String&);

  // Set magnetic coils type (solenoidal/saddle)
  virtual void SetMagneticCoils(G4String &type) { fTypeMagneticCoils = type; }

private:
  A2MagneticField* fMagneticField;
  G4String fTypeMagneticCoils;

  A2SD* fPTSD;
  G4Trap *fPT;
  G4LogicalVolume *fPTLogic;
  G4VPhysicalVolume** fPTPhysi;

  //geometric parameters
  G4double fpt_x;
  G4double fpt_y;
  G4double fpt_z;
  G4Region* fregionPT;


};
#endif
