#ifndef _VSP_GUI_MEASURE_MANAGER_SCREEN_H
#define _VSP_GUI_MEASURE_MANAGER_SCREEN_H

#include "ScreenBase.h"
#include "DrawObj.h"
#include "GuiDevice.h"
#include "AttributeEditor.h"

class ScreenMgr;

class ManageMeasureScreen : public TabScreen
{
public:
    ManageMeasureScreen( ScreenMgr * mgr );
    virtual ~ManageMeasureScreen();

    virtual void Show();
    virtual void Hide();
    virtual bool Update();

    void CallBack( Fl_Widget *w );
    void CloseCallBack( Fl_Widget *w );
    static void staticScreenCB( Fl_Widget *w, void* data )
    {
        ( ( ManageMeasureScreen* )data )->CallBack( w );
    }

    virtual void GuiDeviceCallBack( GuiDevice* device );

    virtual void GetCollIDs( vector < string > &collIDVec );


    static void Set( const vec3d &placement, const std::string &targetGeomId = "" );

    virtual std::string getFeedbackGroupName();

    void LoadDrawObjs( vector< DrawObj* > & draw_obj_vec );

    void UpdatePickList();

protected:


    GroupLayout m_RulerLayout;

    GroupLayout m_RulerCol1Layout;
    GroupLayout m_RulerCol2Layout;
    GroupLayout m_RulerCol3Layout;

    GroupLayout m_ProbeLayout;

    GroupLayout m_ProbeCol1Layout;
    GroupLayout m_ProbeCol2Layout;
    GroupLayout m_ProbeCol3Layout;

    GroupLayout m_RSTProbeLayout;

    GroupLayout m_RSTProbeCol1Layout;
    GroupLayout m_RSTProbeCol2Layout;

    GroupLayout m_ProtractorLayout;

    GroupLayout m_ProtractorCol1Layout;
    GroupLayout m_ProtractorCol2Layout;
    GroupLayout m_ProtractorCol3Layout;

    AttributeEditor m_RulerAttrEditor;
    AttributeEditor m_ProbeAttrEditor;
    AttributeEditor m_RSTAttrEditor;
    AttributeEditor m_ProtAttrEditor;

    Choice m_RulerLengthUnitChoice;
    Choice m_RulerDirectionChoice;

    SliderAdjRangeInput m_PrecisionSlider;

    TriggerButton m_AddRulerButton;
    TriggerButton m_RemoveRulerButton;
    TriggerButton m_RemoveAllRulersButton;

    TriggerButton m_ShowAllRulersButton;
    TriggerButton m_HideAllRulersButton;

    StringInput m_RulerNameInput;

    TriggerButton m_AttachRulerButton;

    ToggleButton m_VisibleRulerButton;

    Fl_Browser* m_RulerBrowser;

    GeomPicker m_StartGeom;
    Choice m_StartSurfChoice;

    GeomPicker m_EndGeom;
    Choice m_EndSurfChoice;

    SliderAdjRangeInput m_StartUSlider;
    SliderAdjRangeInput m_StartWSlider;
    SliderAdjRangeInput m_EndUSlider;
    SliderAdjRangeInput m_EndWSlider;

    SliderAdjRangeInput m_XOffsetSlider;
    SliderAdjRangeInput m_YOffsetSlider;
    SliderAdjRangeInput m_ZOffsetSlider;

    Output m_DeltaXOutput;
    Output m_DeltaYOutput;
    Output m_DeltaZOutput;

    Output m_DistanceOutput;

    TriggerButton m_AddProbeButton;
    TriggerButton m_RemoveProbeButton;
    TriggerButton m_RemoveAllProbesButton;
    TriggerButton m_ShowAllProbesButton;
    TriggerButton m_HideAllProbesButton;

    Choice m_ProbeLengthUnitChoice;

    StringInput m_ProbeNameInput;

    TriggerButton m_AttachProbeButton;

    ToggleButton m_VisibleProbeButton;

    Fl_Browser* m_ProbeBrowser;

    GeomPicker m_ProbeGeom;
    Choice m_ProbeSurfChoice;

    SliderAdjRangeInput m_ProbeUSlider;
    SliderAdjRangeInput m_ProbeWSlider;

    SliderAdjRangeInput m_ProbeLenSlider;

    SliderAdjRangeInput m_ProbePrecisionSlider;

    Output m_XOutput;
    Output m_YOutput;
    Output m_ZOutput;

    Output m_NXOutput;
    Output m_NYOutput;
    Output m_NZOutput;

    Output m_K1Output;
    Output m_K2Output;
    Output m_KaOutput;
    Output m_KgOutput;

    TriggerButton m_AddRSTProbeButton;
    TriggerButton m_RemoveRSTProbeButton;
    TriggerButton m_RemoveAllRSTProbesButton;
    TriggerButton m_ShowAllRSTProbesButton;
    TriggerButton m_HideAllRSTProbesButton;

    Choice m_RSTProbeLengthUnitChoice;

    StringInput m_RSTProbeNameInput;

    TriggerButton m_AttachRSTProbeButton;

    ToggleButton m_VisibleRSTProbeButton;

    Fl_Browser* m_RSTProbeBrowser;

    GeomPicker m_RSTProbeGeom;
    Choice m_RSTProbeSurfChoice;

    SliderAdjRangeInput m_ProbeRSlider;
    SliderAdjRangeInput m_ProbeSSlider;
    SliderAdjRangeInput m_ProbeTSlider;

    ToggleButton m_ProbeRSTToggle;
    ToggleButton m_ProbeLMNToggle;
    ToggleRadioGroup m_ProbeRSTLMNToggle;

    SliderAdjRangeInput m_ProbeLSlider;
    SliderAdjRangeInput m_ProbeMSlider;
    SliderAdjRangeInput m_ProbeNSlider;

    SliderAdjRangeInput m_RSTProbeLenSlider;

    SliderAdjRangeInput m_RSTProbePrecisionSlider;

    Output m_RSTXOutput;
    Output m_RSTYOutput;
    Output m_RSTZOutput;

    Choice m_ProtractorDirectionChoice;

    SliderAdjRangeInput m_ProtractorPrecisionSlider;

    TriggerButton m_AddProtractorButton;
    TriggerButton m_RemoveProtractorButton;
    TriggerButton m_RemoveAllProtractorsButton;

    TriggerButton m_ShowAllProtractorsButton;
    TriggerButton m_HideAllProtractorsButton;

    StringInput m_ProtractorNameInput;

    TriggerButton m_AttachProtractorButton;

    ToggleButton m_VisibleProtractorButton;

    Fl_Browser* m_ProtractorBrowser;

    GeomPicker m_ProtractorStartGeom;
    Choice m_ProtractorStartSurfChoice;

    GeomPicker m_ProtractorMidGeom;
    Choice m_ProtractorMidSurfChoice;

    GeomPicker m_ProtractorEndGeom;
    Choice m_ProtractorEndSurfChoice;

    SliderAdjRangeInput m_ProtractorStartUSlider;
    SliderAdjRangeInput m_ProtractorStartWSlider;
    SliderAdjRangeInput m_ProtractorMidUSlider;
    SliderAdjRangeInput m_ProtractorMidWSlider;
    SliderAdjRangeInput m_ProtractorEndUSlider;
    SliderAdjRangeInput m_ProtractorEndWSlider;

    SliderAdjRangeInput m_ProtractorOffsetSlider;

    Output m_ThetaXOutput;
    Output m_ThetaYOutput;
    Output m_ThetaZOutput;

    Output m_ThetaOutput;

private:

    std::vector<DrawObj> m_PickList;

};
#endif
