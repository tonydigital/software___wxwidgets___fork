/////////////////////////////////////////////////////////////////////////////
// Name:        gaugemsw.h
// Purpose:     wxGauge class
// Author:      Julian Smart
// Modified by:
// Created:     01/02/97
// RCS-ID:      $Id$
// Copyright:   (c) Julian Smart
// Licence:   	wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _GAUGEMSW_H_
            #define _GAUGEMSW_H_
            
///////////
            #pragma interface "gaugemsw.h"
            #endif
            
            #include "wx/control.h"
            

            
            // Group box
///////////
            {
                                     DECLARE_DYNAMIC_CLASS(wxGaugeMSW)
                                 
////////////////////////////////
                                     wxGaugeMSW(void) { m_rangeMax = 0; m_gaugePos = 0; }
ePos = 0; }
                                     wxGaugeMSW(wxWindow *parent, wxWindowID id,
d,
                                             const wxPoint& pos = wxDefaultPosition,
ition,
e,
                                             const wxValidator& validator = wxDefaultValidator,
DefaultValidator,
eStr)
                                                               Create(parent, id, range, pos, size, style, validator, name);
id, range, pos, size, style, validator, name);
//////////////////////////////////////////////////////
w.h
w *parent, wxWindowID id,
 mart
nt& pos = wxDefaultPosition,
e& size = wxDefaultSize,
= wxGA_HORIZONTAL,
idator& validator = wxDefaultValidator,
ing& name = wxGaugeNameStr);
idator& validator = wxDefaultValidator,
(int w);
etBezelFace(int w);
    void SetRange(int r);
    void SetValue(int pos);

    int GetShadowWidth(void) const ;
    int GetBezelFace(void) const ;
    int GetRange(void) const ;
    int GetValue(void) const ;

    bool SetForegroundColour(const wxColour& col);
    bool SetBackgroundColour(const wxColour& col);

    // Backward compatibility
                    #if WXWIN_COMPATIBILITY
                                  void SetButtonColour(const wxColour& col) { SetForegroundColour(col); }
SetForegroundColour(col); }
/////////////////////////////
                                  virtual void Command(wxCommandEvent& WXUNUSED(event)) {} ;
D(event)) {} ;
                              protected:
on,
                                  int      m_gaugePos;
on,
);
);
,
int sizeFlags = wxSIZE_AUTO);
);
nColour(const wxColour& col) { SetForegroundColour(col); }
