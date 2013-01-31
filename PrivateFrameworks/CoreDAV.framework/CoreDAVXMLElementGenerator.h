/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItem, NSMutableData, CoreDAVXMLElementGenerator, NSDictionary, NSURL;

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate> {
    int _parsingState;
    SEL _parentElementSetter;
    CoreDAVItem *_element;
    CoreDAVItem *_parentElement;
    CoreDAVXMLElementGenerator *_parentGenerator;
    NSMutableData *_characters;
    NSMutableData *_cDATA;
    CoreDAVXMLElementGenerator *_currentlyParsingSubItem;
    NSDictionary *_cachedElementParseRules;
    BOOL _checkedElementValidityIfRootElement;
    BOOL _isUnrecognized;
    NSURL *_baseURL;
}

@property(retain) CoreDAVItem * element;
@property BOOL isUnrecognized;
@property BOOL checkedElementValidityIfRootElement;
@property int parsingState;
@property SEL parentElementSetter;
@property(retain) NSMutableData * characters;
@property(retain) NSMutableData * cDATA;
@property(retain) CoreDAVXMLElementGenerator * currentlyParsingSubItem;
@property CoreDAVXMLElementGenerator * parentGenerator;
@property(retain) NSDictionary * cachedElementParseRules;
@property(retain) NSURL * baseURL;


- (id)element;
- (void)dealloc;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (int)parsingState;
- (void)setParentGenerator:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setParentElementSetter:(SEL)arg1;
- (id)initWithParser:(id)arg1 baseURL:(id)arg2 rootElementNameSpace:(id)arg3 elementName:(id)arg4 parseClass:(Class)arg5;
- (void)resumeParsingWithParser:(id)arg1;
- (void)setCDATA:(id)arg1;
- (SEL)parentElementSetter;
- (BOOL)isUnrecognized;
- (id)cDATA;
- (void)setParsingState:(int)arg1;
- (void)setIsUnrecognized:(BOOL)arg1;
- (void)setCurrentlyParsingSubItem:(id)arg1;
- (void)setCachedElementParseRules:(id)arg1;
- (id)cachedElementParseRules;
- (void)notifyElement:(id)arg1 ofAttributesFound:(id)arg2;
- (void)noteChildCascadingFailure;
- (BOOL)isExpectedNameSpace:(id)arg1 andElementName:(id)arg2;
- (void)setCheckedElementValidityIfRootElement:(BOOL)arg1;
- (BOOL)checkedElementValidityIfRootElement;
- (id)currentlyParsingSubItem;
- (BOOL)tracksRootElement;
- (id)parentGenerator;
- (id)initWithParser:(id)arg1 parentGenerator:(id)arg2 parentElementSetter:(SEL)arg3 element:(id)arg4;
- (id)characters;
- (void)setCharacters:(id)arg1;
- (id)baseURL;
- (void)setBaseURL:(id)arg1;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;

@end
