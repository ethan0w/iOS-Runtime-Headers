/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKXMLExtractor : NSObject <NSXMLParserDelegate> {
    NSMutableArray * _allTagSpecifications;
    NSString * _matchedTagSpecification;
    NSMutableDictionary * _resultTagContent;
    NSMutableArray * _stackOfElements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_matchSpecificationWithAttributes:(id)arg1;
- (void)_parseWithXMLParser:(id)arg1;
- (void)_resetScanningState;
- (void)addTagSpecificationForExtraction:(id)arg1;
- (id)getDataForTagSpecification:(id)arg1;
- (id)init;
- (void)parseWithData:(id)arg1;
- (void)parseWithStream:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;

@end
