#pragma once

#include "word/main/properties/paragraph.hpp"
#include "word/main/properties/richtext.hpp"


namespace MINIDOCX_NAMESPACE
{
  struct DocumentSettings
  {
    //	<activeWritingStyle> (Grammar Checking Settings)	§2.15.1.1
    struct WritingStyle
    {
        std::string appName_;
        bool checkStyle_;
        std::string dllVersion_;
        std::string lang_;
        std::optional<bool> naturalLangCheck_;
        std::string vendorID_;
    };
    //	<alignBordersAndEdges> (Align Paragraph and Table Borders with Page Border)	§2.15.1.2
    //	<alwaysMergeEmptyNamespace> (Do Not Mark Custom XML Elements With No Namespace As Invalid)	§2.15.1.3
    //	<alwaysShowPlaceholderText> (Use Custom XML Element Names as Default Placeholder Text)	§2.15.1.4
    //	<attachedSchema> (Attached Custom XML Schema)	§2.15.1.5
    //	<attachedTemplate> (Attached Document Template)	§2.15.1.6
    //	<autoFormatOverride> (Allow Automatic Formatting to Override Formatting Protection Settings)	§2.15.1.9
    //	<autoHyphenation> (Automatically Hyphenate Document Contents When Displayed)	§2.15.1.10
    //	<bookFoldPrinting> (Book Fold Printing)	§2.15.1.11
    //	<bookFoldPrintingSheets> (Number of Pages Per Booklet)	§2.15.1.12
    //	<bookFoldRevPrinting> (Reverse Book Fold Printing)	§2.15.1.13
    //	<bordersDoNotSurroundFooter> (Page Border Excludes Footer)	§2.15.1.14
    //	<bordersDoNotSurroundHeader> (Page Border Excludes Header)	§2.15.1.15
    //	<captions> (Caption Settings)	§2.15.1.17
    //	<characterSpacingControl> (Character-Level Whitespace Compression)	§2.15.1.18
    //	<clickAndTypeStyle> (Paragraph Style Applied to Automatically Generated Paragraphs)	§2.15.1.19
    //	<clrSchemeMapping> (Theme Color Mappings)	§2.15.1.20
    //	<compat> (Compatibility Settings)	§2.15.3.9
    //	<consecutiveHyphenLimit> (Maximum Number of Consecutively Hyphenated Lines)	§2.15.1.21
    //	<decimalSymbol> (Radix Point for Field Code Evaluation)	§2.15.1.22
    //	<defaultTableStyle> (Default Table Style for Newly Inserted Tables)	§2.15.1.23
    //	<defaultTabStop> (Distance Between Automatic Tab Stops)	§2.15.1.24
    //	<displayBackgroundShape> (Display Background Objects When Displaying Document)	§2.15.1.25
    //	<displayHorizontalDrawingGridEvery> (Distance between Horizontal Gridlines)	§2.15.1.26
    //	<displayVerticalDrawingGridEvery> (Distance between Vertical Gridlines)	§2.15.1.27
    //	<documentProtection> (Document Editing Restrictions)	§2.15.1.28
    //	<documentType> (Document Classification)	§2.15.1.29
    //	<docVars> (Document Variables)	§2.15.1.31
    //	<doNotAutoCompressPictures> (Do Not Automatically Compress Images)	§2.15.1.32
    //	<doNotDemarcateInvalidXml> (Do Not Show Visual Indicator For Invalid Custom XML Markup)	§2.15.1.33
    //	<doNotDisplayPageBoundaries> (Do Not Display Visual Boundary For Header/Footer or Between Pages)	§2.15.1.34
    //	<doNotEmbedSmartTags> (Remove Smart Tags When Saving)	§2.15.1.35
    //	<doNotHyphenateCaps> (Do Not Hyphenate Words in ALL CAPITAL LETTERS)	§2.15.1.36
    //	<doNotIncludeSubdocsInStats> (Do Not Include Content in Text Boxes, Footnotes, and Endnotes in Document Statistics)	§2.15.1.37
    //	<doNotShadeFormData> (Do Not Show Visual Indicator For Form Fields)	§2.15.1.38
    //	<doNotTrackFormatting> (Do Not Track Formatting Revisions When Tracking Revisions)	§2.15.1.39
    //	<doNotTrackMoves> (Do Not Use Move Syntax When Tracking Revisions)	§2.15.1.40
    //	<doNotUseMarginsForDrawingGridOrigin> (Do Not Use Margins for Drawing Grid Origin)	§2.15.1.41
    //	<doNotValidateAgainstSchema> (Do Not Validate Custom XML Markup Against Schemas)	§2.15.1.42
    //	<drawingGridHorizontalOrigin> (Drawing Grid Horizontal Origin Point)	§2.15.1.43
    //	<drawingGridHorizontalSpacing> (Drawing Grid Horizontal Grid Unit Size)	§2.15.1.44
    //	<drawingGridVerticalOrigin> (Drawing Grid Vertical Origin Point)	§2.15.1.45
    //	<drawingGridVerticalSpacing> (Drawing Grid Vertical Grid Unit Size)	§2.15.1.46
    //	<embedSystemFonts> (Embed Common System Fonts)	§2.8.2.7
    //	<embedTrueTypeFonts> (Embed TrueType Fonts)	§2.8.2.8
    //	<endnotePr> (Document-Wide Endnote Properties)	§2.11.4
    //	<evenAndOddHeaders> (Different Even/Odd Page Headers and Footers)	§2.10.1
    bool evenOddHeader_ = false;

    //	<footnotePr> (Document-Wide Footnote Properties)	§2.11.11
    //	<forceUpgrade> (Upgrade Document on Open)	§2.15.1.47
    //	<formsDesign> (Structured Document Tag Placeholder Text Should be Resaved)	§2.15.1.48
    //	<gutterAtTop> (Position Gutter At Top of Page)	§2.15.1.49
    //	<hdrShapeDefaults> (Default Properties for VML Objects in Header and Footer)	§2.15.1.50
    //	<hideGrammaticalErrors> (Do Not Display Visual Indication of Grammatical Errors)	§2.15.1.51
    //	<hideSpellingErrors> (Do Not Display Visual Indication of Spelling Errors)	§2.15.1.52
    //	<hyphenationZone> (Hyphenation Zone)	§2.15.1.53
    //	<ignoreMixedContent> (Ignore Mixed Content When Validating Custom XML Markup)	§2.15.1.54
    //	<linkStyles> (Automatically Update Styles From Document Template)	§2.15.1.55
    //	<listSeparator> (List Separator for Field Code Evaluation)	§2.15.1.56
    //	<mailMerge> (Mail Merge Settings)	§2.14.20
    //	<mathPr> (Math Properties)	§7.1.2.62
    //	<mirrorMargins> (Mirror Page Margins)	§2.15.1.57
    //	<noLineBreaksAfter> (Custom Set of Characters Which Cannot End a Line)	§2.15.1.58
    //	<noLineBreaksBefore> (Custom Set Of Characters Which Cannot Begin A Line)	§2.15.1.59
    //	<noPunctuationKerning> (Never Kern Punctuation Characters)	§2.15.1.60
    //	<printFormsData> (Only Print Form Field Content)	§2.15.1.61
    //	<printFractionalCharacterWidth> (Print Fractional Character Widths)	§2.15.1.62
    //	<printPostScriptOverText> (Print PostScript Codes With Document Text)	§2.15.1.63
    //	<printTwoOnOne> (Print Two Pages Per Sheet)	§2.15.1.64
    //	<proofState> (Spelling and Grammatical Checking State)	§2.15.1.65
    //	<readModeInkLockDown> (Freeze Document Layout)	§2.15.1.66
    //	<removeDateAndTime> (Remove Date and Time from Annotations)	§2.15.1.67
    //	<removePersonalInformation> (Remove Personal Information from Document Properties)	§2.15.1.68
    //	<revisionView> (Visibility of Annotation Types)	§2.15.1.69
    //	<rsids> (Listing of All Revision Save ID Values)	§2.15.1.72
    //	<saveFormsData> (Only Save Form Field Content)	§2.15.1.73
    //	<saveInvalidXml> (Allow Saving Document As XML File When Custom XML Markup Is Invalid)	§2.15.1.74
    //	<savePreviewPicture> (Generate Thumbnail For Document On Save)	§2.15.1.75
    //	<saveSubsetFonts> (Subset Fonts When Embedding)	§2.8.2.15
    //	<saveThroughXslt> (Custom XSL Transform To Use When Saving As XML File)	§2.15.1.76
    //	<saveXmlDataOnly> (Only Save Custom XML Markup)	§2.15.1.77
    //	<schemaLibrary> (Embedded Custom XML Schema Supplementary Data)	§8.2.2
    //	<shapeDefaults> (Default Properties for VML Objects in Main Document)	§2.15.1.79
    //	<showEnvelope> (Show E-Mail Message Header)	§2.15.1.80
    //	<showXMLTags> (Show Visual Indicators for Custom XML Markup Start/End Locations)	§2.15.1.81
    //	<smartTagType> (Supplementary Smart Tag Information)	§2.15.1.82
    //	<strictFirstAndLastChars> (Use Strict Kinsoku Rules for Japanese Text)	§2.15.1.83
    //	<styleLockQFSet> (Prevent Replacement of Styles Part)	§2.15.1.84
    //	<styleLockTheme> (Prevent Modification of Themes Part)	§2.15.1.85
    //	<stylePaneFormatFilter> (Suggested Filtering for List of Document Styles)	§2.15.1.86
    //	<stylePaneSortMethod> (Suggested Sorting for List of Document Styles)	§2.15.1.87
    //	<summaryLength> (Percentage of Document to Use When Generating Summary)	§2.15.1.88
    //	<themeFontLang> (Theme Font Languages)	§2.15.1.89
    //	<trackRevisions> (Track Revisions to Document)	§2.15.1.90
    //	<uiCompat97To2003> (Disable Features Incompatible With Earlier Word Processing Formats)	§2.15.3.54
    //	<updateFields> (Automatically Recalculate Fields on Open)	§2.15.1.91
    //	<useXSLTWhenSaving> (Save Document as XML File through Custom XSL Transform)	§2.15.1.92
    //	<view> (Document View Setting)	§2.15.1.93
    //	<writeProtection> (Write Protection)	§2.15.1.94
    //	<zoom> (Magnification Setting)	§2.15.1.95

  };
}
