/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDOMNode : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, copy) NSString *baseURL;
@property (nonatomic) int childNodeCount;
@property (nonatomic, copy) NSArray *children;
@property (nonatomic, retain) RWIProtocolDOMNode *contentDocument;
@property (nonatomic, copy) NSString *contentSecurityPolicyHash;
@property (nonatomic) int customElementState;
@property (nonatomic, copy) NSString *documentURL;
@property (nonatomic, copy) NSString *frameId;
@property (nonatomic, copy) NSString *localName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int nodeId;
@property (nonatomic, copy) NSString *nodeName;
@property (nonatomic) int nodeType;
@property (nonatomic, copy) NSString *nodeValue;
@property (nonatomic, copy) NSArray *pseudoElements;
@property (nonatomic) int pseudoType;
@property (nonatomic, copy) NSString *publicId;
@property (nonatomic, copy) NSString *role;
@property (nonatomic) int shadowRootType;
@property (nonatomic, copy) NSArray *shadowRoots;
@property (nonatomic, copy) NSString *systemId;
@property (nonatomic, retain) RWIProtocolDOMNode *templateContent;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *xmlVersion;

- (id)attributes;
- (id)baseURL;
- (int)childNodeCount;
- (id)children;
- (id)contentDocument;
- (id)contentSecurityPolicyHash;
- (int)customElementState;
- (id)documentURL;
- (id)frameId;
- (id)initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5;
- (id)localName;
- (id)name;
- (int)nodeId;
- (id)nodeName;
- (int)nodeType;
- (id)nodeValue;
- (id)pseudoElements;
- (int)pseudoType;
- (id)publicId;
- (id)role;
- (void)setAttributes:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setChildNodeCount:(int)arg1;
- (void)setChildren:(id)arg1;
- (void)setContentDocument:(id)arg1;
- (void)setContentSecurityPolicyHash:(id)arg1;
- (void)setCustomElementState:(int)arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setFrameId:(id)arg1;
- (void)setLocalName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNodeId:(int)arg1;
- (void)setNodeName:(id)arg1;
- (void)setNodeType:(int)arg1;
- (void)setNodeValue:(id)arg1;
- (void)setPseudoElements:(id)arg1;
- (void)setPseudoType:(int)arg1;
- (void)setPublicId:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setShadowRootType:(int)arg1;
- (void)setShadowRoots:(id)arg1;
- (void)setSystemId:(id)arg1;
- (void)setTemplateContent:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setXmlVersion:(id)arg1;
- (int)shadowRootType;
- (id)shadowRoots;
- (id)systemId;
- (id)templateContent;
- (id)value;
- (id)xmlVersion;

@end
