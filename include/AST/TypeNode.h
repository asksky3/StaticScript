#pragma once

#include "AST/Node.h"

enum class TypeKind {
    Boolean, Integer, String
};

/// 类型节点
class TypeNode : public Node {
public:
    explicit TypeNode(TypeKind kind);

    ~TypeNode() override = default;

    virtual bool isBuiltin() const = 0;

    TypeKind kind;
};

/// 内建类型节点
class BuiltinTypeNode : public TypeNode {
public:
    explicit BuiltinTypeNode(TypeKind kind);

    ~BuiltinTypeNode() override = default;

    bool isBuiltin() const override;

    void accept(const SharedPtr<ASTVisitor> &visitor) override;

    static inline const SharedPtr<BuiltinTypeNode> BOOLEAN_TYPE = makeShared<BuiltinTypeNode>(TypeKind::Boolean);
    static inline const SharedPtr<BuiltinTypeNode> INTEGER_TYPE = makeShared<BuiltinTypeNode>(TypeKind::Integer);
    static inline const SharedPtr<BuiltinTypeNode> STRING_TYPE = makeShared<BuiltinTypeNode>(TypeKind::String);
};
