/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHDOMXML : NSObject <GQHXMLOutput> {
    struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; } *mXMLDoc;
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } *mCurrentNode;
}


- (void)removeStyleSheetLinkNodeAndAddStyle:(struct __CFString { }*)arg1;
- (struct __CFData { }*)createHtmlWithCss:(struct __CFString { }*)arg1;
- (struct __CFData { }*)createHtml;
- (id)initWithHead;
- (id)initEmpty;
- (void)addXmlCharContent:(const char *)arg1;
- (void)addCharRef:(const char *)arg1;
- (struct __CFData { }*)createProgressiveHtml;
- (void)endElementWithExpectedName:(const char *)arg1;
- (void)endElement;
- (void)startElement:(const char *)arg1;
- (void)dealloc;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;

@end
